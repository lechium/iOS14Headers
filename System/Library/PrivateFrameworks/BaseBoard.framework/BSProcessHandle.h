/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BSAuditToken, BSMachPortTaskNameRight;

@interface BSProcessHandle : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {

	BOOL _resolvedBundleID;
	int _pid;
	NSString* _bundleID;
	BSAuditToken* _auditToken;
	NSString* _name;
	BSMachPortTaskNameRight* _taskNameRight;

}

@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * bundlePath; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken;                            //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)processHandleForAuditToken:(id)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg1 ;
+(id)processHandleForXPCConnection:(id)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg1 bundleID:(id)arg2 ;
+(id)processHandleForNSXPCConnection:(id)arg1 ;
+(id)processHandleForAuditToken:(id)arg1 bundleID:(id)arg2 ;
+(id)processHandleForPID:(int)arg1 bundleID:(id)arg2 ;
+(id)processHandleForPID:(int)arg1 ;
+(id)processHandle;
-(NSString *)bundlePath;
-(id)valueForEntitlement:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)dealloc;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BSMachPortTaskNameRight *)taskNameRight;
-(BOOL)isValid;
-(id)succinctDescriptionBuilder;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)name;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(int)pid;
-(NSString *)description;
-(NSString *)jobLabel;
@end
