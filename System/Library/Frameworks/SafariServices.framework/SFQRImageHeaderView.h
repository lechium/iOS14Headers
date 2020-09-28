/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol BCSAction;
@class UIImageView;

@interface SFQRImageHeaderView : UIView {

	UIImageView* _iconView;
	id<BCSAction> _action;

}

@property (assign,nonatomic,__weak) id<BCSAction> action;              //@synthesize action=_action - In the implementation block
-(id<BCSAction>)action;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_title;
-(void)setAction:(id<BCSAction>)arg1 ;
-(id)_actionTypeString;
@end
