/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKRecognitionSessionManager;

@interface PKQuery : NSObject {

	PKRecognitionSessionManager* _sessionManager;
	id _delegate;

}

@property (assign,nonatomic,__weak) PKRecognitionSessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                               //@synthesize delegate=_delegate - In the implementation block
-(void)pause;
-(PKRecognitionSessionManager *)sessionManager;
-(void)teardown;
-(void)start;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithRecognitionSessionManager:(id)arg1 ;
-(void)setSessionManager:(PKRecognitionSessionManager *)arg1 ;
@end
