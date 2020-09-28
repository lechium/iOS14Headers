/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUILabelBaselineProtocol.h>

@class VUIFeedbackTableLayout, NSArray, NSString;

@interface VUIFeedbackTableView : UIView <VUILabelBaselineProtocol> {

	VUIFeedbackTableLayout* _layout;
	NSArray* _dataModels;

}

@property (nonatomic,retain) VUIFeedbackTableLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSArray * dataModels;                         //@synthesize dataModels=_dataModels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayout:(VUIFeedbackTableLayout *)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)layoutSubviews;
-(id)init;
-(VUIFeedbackTableLayout *)layout;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)prepareForCellReuse;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(NSArray *)dataModels;
-(void)setDataModels:(NSArray *)arg1 ;
-(CGSize)_calculateMaxDescriptionThatFit:(CGSize)arg1 ;
-(CGSize)_calculateMaxHeaderThatFits:(CGSize)arg1 ;
@end
