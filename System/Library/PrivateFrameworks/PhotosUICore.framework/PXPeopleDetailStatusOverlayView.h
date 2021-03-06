/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSArray;

@interface PXPeopleDetailStatusOverlayView : UIView {

	UIImageView* _keyAssetImageView;
	UILabel* _messageField;
	UILabel* _subtitleField;
	NSArray* _viewConstraints;

}

@property (nonatomic,copy) NSArray * viewConstraints;                        //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) UIImageView * keyAssetImageView;              //@synthesize keyAssetImageView=_keyAssetImageView - In the implementation block
@property (nonatomic,readonly) UILabel * messageField;                       //@synthesize messageField=_messageField - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleField;                      //@synthesize subtitleField=_subtitleField - In the implementation block
-(double)preferredHeightForWidth:(double)arg1 ;
-(UILabel *)messageField;
-(id)initWithFrame:(CGRect)arg1 keyImage:(id)arg2 message:(id)arg3 subtitleText:(id)arg4 ;
-(double)_imageHeightMultiplier;
-(void)updateConstraints;
-(UIImageView *)keyAssetImageView;
-(UILabel *)subtitleField;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
@end

