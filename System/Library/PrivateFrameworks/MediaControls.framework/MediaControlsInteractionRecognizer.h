/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class MSVTimer;

@interface MediaControlsInteractionRecognizer : UIGestureRecognizer {

	MSVTimer* _interactionTimer;

}

@property (nonatomic,retain) MSVTimer * interactionTimer;              //@synthesize interactionTimer=_interactionTimer - In the implementation block
-(MSVTimer *)interactionTimer;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setInteractionTimer:(MSVTimer *)arg1 ;
@end
