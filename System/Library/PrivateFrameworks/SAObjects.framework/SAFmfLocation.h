/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALocation.h>

@class NSNumber, SAPersonAttribute;

@interface SAFmfLocation : SALocation

@property (nonatomic,copy) NSNumber * distance; 
@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSNumber * locationDate; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDistance:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(SAPersonAttribute *)friend;
-(NSNumber *)locationDate;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(void)setLocationDate:(NSNumber *)arg1 ;
-(NSNumber *)distance;
@end
