/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VCAudioSessionDelegate;
@class VCAudioSessionMediaProperties;

@interface VCAudioSessionClient : NSObject <NSCopying> {

	id<VCAudioSessionDelegate> _notificationClient;
	VCAudioSessionMediaProperties* _mediaProperties;
	unsigned char _clientType;

}

@property (assign,nonatomic) unsigned char clientType;                                     //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) id<VCAudioSessionDelegate> notificationClient; 
@property (nonatomic,retain) VCAudioSessionMediaProperties * mediaProperties;              //@synthesize mediaProperties=_mediaProperties - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<VCAudioSessionDelegate>)notificationClient;
-(unsigned char)clientType;
-(void)dealloc;
-(void)setClientType:(unsigned char)arg1 ;
-(void)setMediaProperties:(VCAudioSessionMediaProperties *)arg1 ;
-(void)setNotificationClient:(id<VCAudioSessionDelegate>)arg1 ;
-(VCAudioSessionMediaProperties *)mediaProperties;
@end

