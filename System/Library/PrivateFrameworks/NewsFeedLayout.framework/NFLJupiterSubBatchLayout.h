/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLJupiterSubBatchLayout : NFLSubBatchLayout {

	int _layoutType;
	NFLSingleComponentLayout* _largeSixComponent;
	NFLSingleComponentLayout* _leftThreeComponent;
	NFLSingleComponentLayout* _rightThreeComponent;
	NFLSingleComponentLayout* _topSixComponent;
	NFLSingleComponentLayout* _bottomSixComponent;

}

@property (assign,nonatomic) int layoutType;                                              //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * largeSixComponent;                //@synthesize largeSixComponent=_largeSixComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * leftThreeComponent;               //@synthesize leftThreeComponent=_leftThreeComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * rightThreeComponent;              //@synthesize rightThreeComponent=_rightThreeComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * topSixComponent;                  //@synthesize topSixComponent=_topSixComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomSixComponent;               //@synthesize bottomSixComponent=_bottomSixComponent - In the implementation block
-(double)rank;
-(unsigned long long)rowSpan;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)tileInfosUsed;
-(int)layoutType;
-(BOOL)isValid;
-(void)setLayoutType:(int)arg1 ;
-(NFLSingleComponentLayout *)topSixComponent;
-(NFLSingleComponentLayout *)bottomSixComponent;
-(NFLSingleComponentLayout *)leftThreeComponent;
-(NFLSingleComponentLayout *)rightThreeComponent;
-(id)singleComponentLayouts;
-(void)setTopSixComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomSixComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setRightThreeComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setLeftThreeComponent:(NFLSingleComponentLayout *)arg1 ;
-(NFLSingleComponentLayout *)largeSixComponent;
-(id)initWithFeedSettings:(id)arg1 layoutType:(int)arg2 ;
-(void)setLargeSixComponent:(NFLSingleComponentLayout *)arg1 ;
@end
