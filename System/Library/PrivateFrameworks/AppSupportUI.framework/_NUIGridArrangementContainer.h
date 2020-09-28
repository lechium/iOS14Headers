/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NUIGridArrangementContainer <NUIArrangementContainer>
@optional
-(BOOL)canCancelMeasurementForCompression;
-(BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;

@required
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1;

@end
