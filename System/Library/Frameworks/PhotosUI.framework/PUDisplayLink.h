/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class CADisplayLink;

@interface PUDisplayLink : NSObject {

	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	CADisplayLink* _displayLink;

}

@property (nonatomic,copy) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)start;
-(void)_update:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CADisplayLink *)displayLink;
-(void)stop;
-(id)completionHandler;
@end
