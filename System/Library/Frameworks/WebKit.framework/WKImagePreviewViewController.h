/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@interface WKImagePreviewViewController : UIViewController {

	RetainPtr<NSArray>* _imageActions;
	RetainPtr<_WKActivatedElementInfo>* _activatedElementInfo;
	RetainPtr<CGImage *>* _image;
	RetainPtr<UIImageView>* _imageView;

}
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)initWithCGImage:(RetainPtr<CGImage *>*)arg1 defaultActions:(RetainPtr<NSArray>*)arg2 elementInfo:(RetainPtr<_WKActivatedElementInfo>*)arg3 ;
-(id)previewActionItems;
@end

