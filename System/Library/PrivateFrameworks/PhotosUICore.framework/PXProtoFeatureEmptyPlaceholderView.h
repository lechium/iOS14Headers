/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UILabel;

@interface PXProtoFeatureEmptyPlaceholderView : PXProtoFeaturePlaceholderView {

	UILabel* _label;

}
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabelText;
-(BOOL)wantsContentView;
-(void)statusDescriptionDidChange;
@end

