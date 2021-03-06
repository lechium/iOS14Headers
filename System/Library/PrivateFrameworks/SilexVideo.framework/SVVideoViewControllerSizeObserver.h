/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoViewControllerSizeObserving.h>

@class SVVideoViewController, SVKeyValueObserver, NSString;

@interface SVVideoViewControllerSizeObserver : NSObject <SVVideoViewControllerSizeObserving> {

	/*^block*/id changeBlock;
	SVVideoViewController* _videoViewController;
	SVKeyValueObserver* _boundsObserver;
	CGSize _size;

}

@property (nonatomic,__weak,readonly) SVVideoViewController * videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * boundsObserver;                             //@synthesize boundsObserver=_boundsObserver - In the implementation block
@property (assign,nonatomic) CGSize size;                                                       //@synthesize size=_size - In the implementation block
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)changeBlock;
-(void)setSize:(CGSize)arg1 ;
-(void)onChange:(/*^block*/id)arg1 ;
-(CGSize)size;
-(SVVideoViewController *)videoViewController;
-(id)initWithVideoViewController:(id)arg1 ;
-(SVKeyValueObserver *)boundsObserver;
@end

