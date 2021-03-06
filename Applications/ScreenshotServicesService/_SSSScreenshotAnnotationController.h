//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SSSScreenshotContentOverlayController.h"

#import "AKControllerDelegateProtocol-Protocol.h"
#import "PDFAKControllerDelegateProtocol-Protocol.h"

@class AKPageModelController, NSString, _SSSScreenshotAnnotationControllerAKOverlayContainerView;

@interface _SSSScreenshotAnnotationController : _SSSScreenshotContentOverlayController <AKControllerDelegateProtocol, PDFAKControllerDelegateProtocol>
{
    AKPageModelController *_pageModelController;	// 8 = 0x8
    _SSSScreenshotAnnotationControllerAKOverlayContainerView *_overlayView;	// 16 = 0x10
    _Bool _didDrawPenStroke;	// 24 = 0x18
}

+ (id)annotationsFromAnnotationData:(id)arg1;	// IMP=0x0000000100037274
+ (id)annotationDataFromAnnotations:(id)arg1;	// IMP=0x00000001000370f8
- (void).cxx_destruct;	// IMP=0x0000000100038258
@property(readonly, nonatomic) _Bool didDrawPenStroke; // @synthesize didDrawPenStroke=_didDrawPenStroke;
- (void)handleDrawingGestureRecognizerUpdate:(id)arg1;	// IMP=0x0000000100038150
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;	// IMP=0x0000000100037fc0
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0000000100037f60
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0000000100037f00
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x0000000100037e84
- (void)controllerDidDismissPopover:(id)arg1;	// IMP=0x0000000100037e24
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;	// IMP=0x0000000100037dd0
- (id)undoManagerForAnnotationController:(id)arg1;	// IMP=0x0000000100037d60
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;	// IMP=0x0000000100037844
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x00000001000376f8
- (struct CGRect)visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x000000010003756c
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x00000001000374d4
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x00000001000374d0
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x00000001000374cc
- (void)penStrokeCompletedForAnnotationController:(id)arg1;	// IMP=0x00000001000374b0
- (void)editCheckpointReachedForAnnotationController:(id)arg1;	// IMP=0x00000001000374a0
- (void)editDetectedForAnnotationController:(id)arg1;	// IMP=0x0000000100037490
- (_Bool)_updateAnnotationsForViewState:(CDStruct_6a6871ea)arg1 createUndoCommand:(_Bool)arg2;	// IMP=0x0000000100036cd8
- (_Bool)_updateAnnotationsForViewState:(CDStruct_6a6871ea)arg1;	// IMP=0x0000000100036cc8
- (void)_updateAnnotationsCreateUndoCommand:(_Bool)arg1;	// IMP=0x00000001000369e8
- (void)_updateAnnotations;	// IMP=0x00000001000369d8
- (void)endedEditingWithOverlay;	// IMP=0x0000000100036998
- (void)logDidEnterEditingWithOverlay;	// IMP=0x00000001000368c0
- (void)updateUndoState;	// IMP=0x000000010003683c
- (void)setGesturesEnabled:(_Bool)arg1;	// IMP=0x00000001000367c4
- (id)rotationGestureRecognizer;	// IMP=0x0000000100036770
- (id)panGestureRecognizer;	// IMP=0x000000010003671c
- (id)longPressGestureRecognizer;	// IMP=0x00000001000366c8
- (id)doubleTapGestureRecognizer;	// IMP=0x0000000100036674
- (id)tapGestureRecognizer;	// IMP=0x0000000100036620
- (id)gestureRecognizers;	// IMP=0x0000000100036400
- (struct CGRect)rectToCenterAboveKeyboard;	// IMP=0x0000000100036064
- (id)overlayView;	// IMP=0x0000000100036020
- (void)setScreenshot:(id)arg1;	// IMP=0x0000000100035de4
- (void)setActive:(_Bool)arg1;	// IMP=0x0000000100035bd8
- (void)_enableInkingOnAKController:(_Bool)arg1;	// IMP=0x0000000100035b94
- (void)_prepareAKController;	// IMP=0x0000000100035784
- (id)pageModelController;	// IMP=0x00000001000356c0
- (_Bool)_isEditingScreenshotImage;	// IMP=0x000000010003569c
- (void)dealloc;	// IMP=0x00000001000355a8
- (id)init;	// IMP=0x0000000100035540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

