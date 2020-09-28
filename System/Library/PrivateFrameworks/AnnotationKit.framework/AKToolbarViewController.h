/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController {

	AKController* _controller;

}

@property (__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (readonly) BOOL isPresentingPopover; 
+(id)imageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)titleForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(void)teardown;
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)revalidateItems;
-(BOOL)isPresentingPopover;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned long long)arg1 ;
@end
