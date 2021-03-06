/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PUUserTransformViewDelegate <NSObject>
@optional
-(void)userTransformView:(id)arg1 didChangeIsUserInteracting:(BOOL)arg2;
-(BOOL)userTransformView:(id)arg1 shouldReceiveTouchAtPoint:(CGPoint)arg2;

@required
-(void)userTransformView:(id)arg1 didChangeUserAffineTransform:(CGAffineTransform)arg2 isUserInteracting:(BOOL)arg3;

@end

