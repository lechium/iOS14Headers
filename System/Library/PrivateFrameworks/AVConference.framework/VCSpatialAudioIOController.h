/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOControllerControl.h>

@class NSString;

@interface VCSpatialAudioIOController : NSObject <VCAudioIOControllerControl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(void)stopClient:(id)arg1 ;
-(void)startClient:(id)arg1 ;
-(id)init;
-(void)updateClient:(id)arg1 ;
@end
