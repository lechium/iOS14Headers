/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAAceCorrection : SADomainObject

@property (nonatomic,copy) NSData * correctionEntryData; 
@property (nonatomic,copy) NSString * debugString; 
+(id)aceCorrection;
+(id)aceCorrectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSData *)correctionEntryData;
-(void)setCorrectionEntryData:(NSData *)arg1 ;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
@end
