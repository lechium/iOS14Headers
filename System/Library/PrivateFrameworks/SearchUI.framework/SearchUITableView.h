/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableView.h>

@protocol SearchUITableViewSizingDelegate;
@interface SearchUITableView : UITableView {

	id<SearchUITableViewSizingDelegate> _sizingDelegate;

}

@property (__weak) id<SearchUITableViewSizingDelegate> sizingDelegate;              //@synthesize sizingDelegate=_sizingDelegate - In the implementation block
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setSizingDelegate:(id<SearchUITableViewSizingDelegate>)arg1 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)safeAreaInsetsDidChange;
-(id<SearchUITableViewSizingDelegate>)sizingDelegate;
@end
