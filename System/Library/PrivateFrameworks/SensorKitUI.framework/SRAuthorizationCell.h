/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SRAuthorizationCellDelegate;
@class UISwitch, NSIndexPath;

@interface SRAuthorizationCell : UITableViewCell {

	UISwitch* _toggle;
	NSIndexPath* _indexPath;
	id<SRAuthorizationCellDelegate> _delegate;

}

@property (nonatomic,retain) UISwitch * toggle;                                            //@synthesize toggle=_toggle - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                      //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic,__weak) id<SRAuthorizationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)authorizationCellForIndexPath:(id)arg1 title:(id)arg2 state:(id)arg3 delegate:(id)arg4 tableView:(id)arg5 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)toggle;
-(void)dealloc;
-(NSIndexPath *)indexPath;
-(void)setDelegate:(id<SRAuthorizationCellDelegate>)arg1 ;
-(id<SRAuthorizationCellDelegate>)delegate;
-(void)setToggle:(UISwitch *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)switchChanged;
@end

