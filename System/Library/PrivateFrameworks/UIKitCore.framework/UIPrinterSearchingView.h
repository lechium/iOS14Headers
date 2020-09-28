/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIPrintMessageAndSpinnerView;

@interface UIPrinterSearchingView : UIView {

	BOOL _constraintsSet;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (assign,nonatomic,__weak) _UIPrintMessageAndSpinnerView * messageAndSpinner;              //@synthesize messageAndSpinner=_messageAndSpinner - In the implementation block
-(void)searchTimeout;
-(_UIPrintMessageAndSpinnerView *)messageAndSpinner;
-(void)setMessageAndSpinner:(_UIPrintMessageAndSpinnerView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setSearching:(BOOL)arg1 ;
-(void)updateFont;
@end
