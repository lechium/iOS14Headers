/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol MarkupViewControllerDelegate <NSObject>
@optional
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(BOOL)controller:(id)arg1 shouldOpenLinkAtURL:(id)arg2;
-(void)controllerWantsToShowShareSheet:(id)arg1;
-(void)controller:(id)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
-(UIEdgeInsets*)customEdgeInsets;
-(void)controller:(id)arg1 didReadCGPDFDocument:(CGPDFDocumentRef)arg2;
-(void)controller:(id)arg1 willWriteCGPDFDocument:(CGPDFDocumentRef)arg2 toContext:(CGContextRef)arg3;
-(UIEdgeInsets*)customSketchOverlayInsets;

@end
