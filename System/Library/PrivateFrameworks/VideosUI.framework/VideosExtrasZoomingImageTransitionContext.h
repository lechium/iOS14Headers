/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VideosExtrasBorderedImageView;

@interface VideosExtrasZoomingImageTransitionContext : NSObject {

	BOOL _interactive;
	VideosExtrasBorderedImageView* _zoomingImageView;
	unsigned long long _itemIndex;
	unsigned long long _appearState;

}

@property (nonatomic,retain) VideosExtrasBorderedImageView * zoomingImageView;              //@synthesize zoomingImageView=_zoomingImageView - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                  //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long appearState;                                //@synthesize appearState=_appearState - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                         //@synthesize interactive=_interactive - In the implementation block
-(void)setInteractive:(BOOL)arg1 ;
-(BOOL)isInteractive;
-(void)setAppearState:(unsigned long long)arg1 ;
-(unsigned long long)appearState;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setZoomingImageView:(VideosExtrasBorderedImageView *)arg1 ;
-(VideosExtrasBorderedImageView *)zoomingImageView;
-(id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(BOOL)arg4 ;
@end
