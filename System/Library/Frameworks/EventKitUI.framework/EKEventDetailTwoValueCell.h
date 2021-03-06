/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {

	int _style;
	UILabel* _titleView;
	UILabel* _valueView;
	UILabel* _value2View;
	int _twoValueCellStyle;

}

@property (nonatomic,readonly) unsigned visibleItems; 
-(double)_layoutForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(id)value2View;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
-(BOOL)update;
-(id)titleView;
-(unsigned)visibleItems;
-(id)valueView;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
@end

