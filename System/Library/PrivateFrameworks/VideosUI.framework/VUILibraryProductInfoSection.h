/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSString, UIView, NSArray;

@interface VUILibraryProductInfoSection : NSObject {

	NSString* _groupName;
	UIView* _headerContentView;
	NSArray* _dataViews;
	double _lineSpacing;
	long long _layoutType;
	UIEdgeInsets _headerPadding;

}

@property (assign,nonatomic) double lineSpacing;                       //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerPadding;               //@synthesize headerPadding=_headerPadding - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets headerMargin; 
@property (assign,nonatomic) long long layoutType;                     //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,copy) NSString * groupName;                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) UIView * headerContentView;               //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,copy) NSArray * dataViews;                        //@synthesize dataViews=_dataViews - In the implementation block
+(id)headerViewWithString:(id)arg1 ;
+(id)dataViewWithString:(id)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(double)lineSpacing;
-(long long)layoutType;
-(void)setLineSpacing:(double)arg1 ;
-(void)setLayoutType:(long long)arg1 ;
-(UIEdgeInsets)headerPadding;
-(UIView *)headerContentView;
-(NSArray *)dataViews;
-(UIEdgeInsets)headerMargin;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(void)setDataViews:(NSArray *)arg1 ;
-(void)setHeaderPadding:(UIEdgeInsets)arg1 ;
@end
