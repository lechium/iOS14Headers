/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIPrinterAccessoryViewDelegate.h>

@class PKPrinter, UIPrinterAccessoryView, UIGestureRecognizer, NSString;

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate> {

	PKPrinter* _printer;
	id _delegate;
	UIPrinterAccessoryView* _printerAccessoryView;
	UIGestureRecognizer* _expandedAccessoryTapRecognizer;

}

@property (assign,nonatomic) int printerState; 
@property (assign,nonatomic,__weak) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL checked; 
@property (nonatomic,retain) UIPrinterAccessoryView * printerAccessoryView;                     //@synthesize printerAccessoryView=_printerAccessoryView - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * expandedAccessoryTapRecognizer;              //@synthesize expandedAccessoryTapRecognizer=_expandedAccessoryTapRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)checked;
-(PKPrinter *)printer;
-(void)printerAccessoryViewInfoButtonPressed:(id)arg1 ;
-(void)setPrinterState:(int)arg1 ;
-(void)expandedAccessoryAreaTapped;
-(void)setExpandedAccessoryTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)expandedAccessoryTapRecognizer;
-(UIPrinterAccessoryView *)printerAccessoryView;
-(void)setPrinterAccessoryView:(UIPrinterAccessoryView *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setDelegate:(id)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(id)delegate;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(int)printerState;
@end
