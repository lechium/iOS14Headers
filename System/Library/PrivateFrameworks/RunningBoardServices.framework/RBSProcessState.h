/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary, RBSProcessHandle, NSSet, NSString;

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSObject*<OS_xpc_object> _codedState;
	unsigned long long _codedValues;
	NSMutableDictionary* _codedStateCache;
	os_unfair_lock_s _lock;
	unsigned char _taskState;
	unsigned char _debugState;
	unsigned char _terminationResistance;
	BOOL _preventedFromLaunching;
	RBSProcessHandle* _process;
	NSSet* _endowmentNamespaces;
	NSSet* _tags;
	NSSet* _legacyAssertions;
	NSSet* _primitiveAssertions;

}

@property (assign,nonatomic) unsigned char taskState;                                                    //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) unsigned char debugState;                                                   //@synthesize debugState=_debugState - In the implementation block
@property (assign,nonatomic) unsigned char terminationResistance;                                        //@synthesize terminationResistance=_terminationResistance - In the implementation block
@property (nonatomic,copy) NSSet * endowmentNamespaces;                                                  //@synthesize endowmentNamespaces=_endowmentNamespaces - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSSet * legacyAssertions;                                                     //@synthesize legacyAssertions=_legacyAssertions - In the implementation block
@property (nonatomic,copy) NSSet * primitiveAssertions;                                                  //@synthesize primitiveAssertions=_primitiveAssertions - In the implementation block
@property (getter=isEmptyState,nonatomic,readonly) BOOL emptyState; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> codedState;                                 //@synthesize codedState=_codedState - In the implementation block
@property (nonatomic,readonly) RBSProcessHandle * process;                                               //@synthesize process=_process - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isDebugging,nonatomic,readonly) BOOL debugging; 
@property (getter=isPreventedFromLaunching,nonatomic,readonly) BOOL preventedFromLaunching;              //@synthesize preventedFromLaunching=_preventedFromLaunching - In the implementation block
@property (nonatomic,copy,readonly) NSSet * assertions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(void)setActiveStateDescriptor:(id)arg1 ;
+(id)stateWithProcess:(id)arg1 ;
-(BOOL)isRunning;
-(void)encodeWithPreviousState:(id)arg1 ;
-(void)setTerminationResistance:(unsigned char)arg1 ;
-(NSSet *)tags;
-(BOOL)isPreventedFromLaunching;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)legacyAssertions;
-(void)setTags:(NSSet *)arg1 ;
-(NSSet *)primitiveAssertions;
-(void)setTaskState:(unsigned char)arg1 ;
-(NSObject*<OS_xpc_object>)codedState;
-(unsigned char)taskState;
-(BOOL)isDifferentFromState:(id)arg1 significantly:(out BOOL*)arg2 ;
-(BOOL)isDebugging;
-(void)setEndowmentNamespaces:(NSSet *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned char)terminationResistance;
-(RBSProcessHandle *)process;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)setPrimitiveAssertions:(NSSet *)arg1 ;
-(void)setLegacyAssertions:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)assertions;
-(NSSet *)endowmentNamespaces;
-(unsigned long long)hash;
-(unsigned char)debugState;
-(NSString *)description;
-(BOOL)isEmptyState;
-(void)setDebugState:(unsigned char)arg1 ;
@end

