/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnostics.framework/iOSDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DADiagnosticsRemoteViewControllerInterface.h>

@protocol DADiagnosticsRemoteDelegate;
@class DADiagnosticResponder;

@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface> {

	float _originalScreenBrightness;
	id<DADiagnosticsRemoteDelegate> _delegate;
	DADiagnosticResponder* _responder;

}

@property (nonatomic,retain) DADiagnosticResponder * responder;                            //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic) float originalScreenBrightness;                               //@synthesize originalScreenBrightness=_originalScreenBrightness - In the implementation block
@property (assign,nonatomic,__weak) id<DADiagnosticsRemoteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(DADiagnosticResponder *)responder;
-(void)setResponder:(DADiagnosticResponder *)arg1 ;
-(id)disconnect;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDelegate:(id<DADiagnosticsRemoteDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<DADiagnosticsRemoteDelegate>)delegate;
-(void)setOriginalScreenBrightness:(float)arg1 ;
-(id)_viewServiceInterface;
-(float)originalScreenBrightness;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidFinishWithReason:(unsigned long long)arg1 ;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg1 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
@end

