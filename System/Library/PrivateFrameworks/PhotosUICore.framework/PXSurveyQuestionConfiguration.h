/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSString, UIView, UIImage, PXSurveyQuestionConfigurationHandlers;


@protocol PXSurveyQuestionConfiguration <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImage * contentImageForOneUp; 
@property (nonatomic,readonly) CGRect contentRectForOneUp; 
@property (nonatomic,retain) PXSurveyQuestionConfigurationHandlers * handlers; 
@required
-(PXSurveyQuestionConfigurationHandlers *)handlers;
-(UIView *)contentView;
-(void)setHandlers:(id)arg1;
-(void)layoutContentViewInRect:(CGRect)arg1;
-(UIImage *)contentImageForOneUp;
-(CGRect)contentRectForOneUp;
-(NSString *)title;

@end

