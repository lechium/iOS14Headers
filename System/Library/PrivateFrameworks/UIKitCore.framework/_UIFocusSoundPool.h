/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface _UIFocusSoundPool : NSObject {

	NSURL* _soundFileURL;
	unsigned _originalSystemSoundID;
	NSArray* _queue;
	unsigned long long _queueIndex;

}
-(unsigned)playableSystemSoundID;
-(id)initWithSystemSoundID:(unsigned)arg1 ;
-(id)initWithSoundFileURL:(id)arg1 ;
@end

