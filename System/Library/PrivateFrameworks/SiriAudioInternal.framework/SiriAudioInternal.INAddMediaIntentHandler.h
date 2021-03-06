/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioInternal.framework/SiriAudioInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INAddMediaIntentHandling.h>

@interface SiriAudioInternal.INAddMediaIntentHandler : NSObject <INAddMediaIntentHandling> {

	 library;
	 nowPlaying;
	 subscription;
	 provider;
	 instanceReference;

}
-(id)init;
-(void)handleAddMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveMediaItemsForAddMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveMediaDestinationForAddMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

