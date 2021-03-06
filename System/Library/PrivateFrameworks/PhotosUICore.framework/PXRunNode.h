/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXRunNode.h>
@class NSArray;


@protocol PXRunNode <NSObject>
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@required
-(void)cancel;
-(BOOL)isRunning;
-(BOOL)isWaiting;
-(NSArray *)dependencies;
-(BOOL)isComplete;
-(void)setDelegate:(id)arg1;
-(BOOL)isCanceled;
-(id<PXRunNodeDelegate>)delegate;
-(unsigned long long)state;

@end


@protocol PXRunNodeDelegate;
@class NSArray, PXRunNodeOperation, NSSet, NSLock, NSString;

@interface PXRunNode : NSObject <PXRunNode> {

	PXRunNodeOperation* _operation;
	NSArray* _dependencies;
	id<PXRunNodeDelegate> _delegate;
	NSSet* __dependencySet;
	NSLock* __operationLock;

}

@property (nonatomic,readonly) NSSet * _dependencySet;                           //@synthesize _dependencySet=__dependencySet - In the implementation block
@property (nonatomic,readonly) NSLock * _operationLock;                          //@synthesize _operationLock=__operationLock - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies;                      //@synthesize dependencies=_dependencies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultNodeRunnerWithQualityOfService:(long long)arg1 ;
+(void)processGraphForRunNode:(id)arg1 withQualityOfService:(long long)arg2 ;
+(void)processGraphForRunNode:(id)arg1 ;
-(void)cancel;
-(BOOL)isRunning;
-(void)didCancel;
-(id)newOperation;
-(void)_performChangesToOperation:(/*^block*/id)arg1 ;
-(NSSet *)_dependencySet;
-(NSLock *)_operationLock;
-(void)run;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)isWaiting;
-(id)initWithDependencies:(id)arg1 ;
-(NSArray *)dependencies;
-(BOOL)isComplete;
-(id)init;
-(void)completeWithError:(id)arg1 ;
-(void)setDelegate:(id<PXRunNodeDelegate>)arg1 ;
-(BOOL)isCanceled;
-(id<PXRunNodeDelegate>)delegate;
-(unsigned long long)state;
-(BOOL)complete;
@end

