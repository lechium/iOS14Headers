/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject, NSMutableSet, NSArray;

@interface FigDisplayMirroringChangeObserver : NSObject {

	OpaqueFigPlayerRef _player;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _clonedDisplays;
	NSMutableSet* _cloningSupportedDisplays;
	NSArray* _baseDisplayList;

}
-(id)initWithPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)updatePlayerDisplayList;
-(void)dealloc;
-(void)setBaseDisplayList:(id)arg1 ;
-(void)removeReferenceToPlayer;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

