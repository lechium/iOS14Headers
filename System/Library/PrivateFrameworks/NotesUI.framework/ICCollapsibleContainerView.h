/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIView;

@interface ICCollapsibleContainerView : ICCollapsibleBaseView {

	UIView* _containedView;

}

@property (nonatomic,retain) UIView * containedView;              //@synthesize containedView=_containedView - In the implementation block
-(void)setContainedView:(UIView *)arg1 ;
-(UIView *)containedView;
-(void)performSetup;
@end

