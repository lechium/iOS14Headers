/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAClockObject.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSURL, NSString;

@interface SAClockAceClockWrap : SAClockObject <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (nonatomic,copy) NSURL * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceClockWrapWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceClockWrap;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSNumber *)generation;
-(void)setGeneration:(NSNumber *)arg1 ;
@end

