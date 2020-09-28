/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKit/SHRemoteStore.h>

@class SHProxyMatcher;

@interface SHAudioMatchingRemoteStore : SHRemoteStore {

	BOOL _sendNotifications;
	SHProxyMatcher* _proxyMatcher;

}

@property (nonatomic,retain) SHProxyMatcher * proxyMatcher;              //@synthesize proxyMatcher=_proxyMatcher - In the implementation block
@property (assign,nonatomic) BOOL sendNotifications;                     //@synthesize sendNotifications=_sendNotifications - In the implementation block
-(void)stop;
-(id)createMatcher;
-(BOOL)sendNotifications;
-(SHProxyMatcher *)proxyMatcher;
-(void)startOneMatchAttempt;
-(void)startMatching;
-(void)startMatchingUntilDeadline:(id)arg1 ;
-(void)startMatchingUntilResultFound;
-(void)setSendNotifications:(BOOL)arg1 ;
-(void)setProxyMatcher:(SHProxyMatcher *)arg1 ;
@end
