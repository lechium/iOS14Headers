/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class GKLabel, NSString;

@interface GKRemoteUIHeaderView : UIView <RUIHeader> {

	BOOL _isFirstSection;
	GKLabel* _textLabel;
	double _height;
	double _bottomMargin;

}

@property (assign,nonatomic) BOOL isFirstSection;                   //@synthesize isFirstSection=_isFirstSection - In the implementation block
@property (nonatomic,retain) GKLabel * textLabel;                   //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double height;                         //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double bottomMargin;                   //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeight:(double)arg1 ;
-(BOOL)isFirstSection;
-(double)height;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(double)bottomMargin;
-(void)setIsFirstSection:(BOOL)arg1 ;
-(void)setTextLabel:(GKLabel *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(GKLabel *)textLabel;
-(void)setBottomMargin:(double)arg1 ;
@end

