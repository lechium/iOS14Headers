/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Protocol;

@interface CKWeakObjectCallbackProxy : NSObject {

	BOOL _hadObject;
	id _weakObject;
	Protocol* _callbackProtocol;

}

@property (assign,nonatomic,__weak) id weakObject;                     //@synthesize weakObject=_weakObject - In the implementation block
@property (nonatomic,retain) Protocol * callbackProtocol;              //@synthesize callbackProtocol=_callbackProtocol - In the implementation block
@property (assign,nonatomic) BOOL hadObject;                           //@synthesize hadObject=_hadObject - In the implementation block
-(void)forwardInvocation:(id)arg1 ;
-(void)setCallbackProtocol:(Protocol *)arg1 ;
-(Protocol *)callbackProtocol;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)weakObject;
-(id)initWithWeakObject:(id)arg1 callbackProtocol:(id)arg2 ;
-(void)setWeakObject:(id)arg1 ;
-(BOOL)hadObject;
-(void)setHadObject:(BOOL)arg1 ;
@end

