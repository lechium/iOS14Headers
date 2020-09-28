/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUControlPanelConfiguration <NSObject>
@property (nonatomic,readonly) id<HUControlPanelRule> rule; 
@property (nonatomic,readonly) Class cellClass; 
@optional
-(BOOL)shouldShowSectionTitleForItem:(id)arg1;
-(id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
-(id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
-(id)valueTransformerForControlItem:(id)arg1;
-(BOOL)shouldShowSectionFooterForItem:(id)arg1;

@required
-(Class)cellClass;
-(id<HUControlPanelRule>)rule;
-(void)setupControlsForCell:(id)arg1 item:(id)arg2;

@end
