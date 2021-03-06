/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CLKDevice, UIImageView, UILabel, NSString;

@interface NTKAlbumEmptyView : UIView {

	CLKDevice* _device;
	UIImageView* _iconImageView;
	UILabel* _headerLabel;
	NSString* _headerLabelText;
	UILabel* _bodyLabel;
	NSString* _bodyLabelText;

}

@property (nonatomic,retain) NSString * headerLabelText;              //@synthesize headerLabelText=_headerLabelText - In the implementation block
@property (nonatomic,retain) NSString * bodyLabelText;                //@synthesize bodyLabelText=_bodyLabelText - In the implementation block
-(NSString *)headerLabelText;
-(void)layoutSubviews;
-(void)setHeaderLabelText:(NSString *)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(void)setBodyLabelText:(NSString *)arg1 ;
-(NSString *)bodyLabelText;
@end

