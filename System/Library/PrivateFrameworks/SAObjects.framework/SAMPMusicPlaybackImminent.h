/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPMusicPlaybackImminent : SADomainCommand

@property (nonatomic,copy) NSString * preloadedUserSharedUserId; 
+(id)musicPlaybackImminent;
+(id)musicPlaybackImminentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)preloadedUserSharedUserId;
-(void)setPreloadedUserSharedUserId:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
@end

