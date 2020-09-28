//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMXPCMessage-Protocol.h"

@class NSString;
@protocol OS_xpc_object;

@interface MCMXPCMessageBase : NSObject <MCMXPCMessage>
{
    unsigned int _platform;	// 8 = 0x8
    struct container_client *_proxy;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcObject;	// 24 = 0x18
}

+ (id)xpcMessageFromXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000001000806fc
+ (_Bool)canLocallyHandleContainerClass:(unsigned long long)arg1;	// IMP=0x00000001000806b0
- (void).cxx_destruct;	// IMP=0x0000000100080624
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject; // @synthesize xpcObject=_xpcObject;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) struct container_client *proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) _Bool canBeHandledLocally;
- (void)dealloc;	// IMP=0x000000010008057c
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000001000804ac
- (id)concreteContainerIdentityFromXPCObject:(id)arg1 identifierKey:(const char *)arg2 clientConnection:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000100081720
- (id)concreteContainerIdentityFromXPCObject:(id)arg1 identifierKey:(const char *)arg2 classKey:(const char *)arg3 UUIDKey:(const char *)arg4 personaUniqueStringKey:(const char *)arg5 clientConnection:(id)arg6 error:(unsigned long long *)arg7;	// IMP=0x00000001000814e8
- (id)containerIdentityFromXPCObject:(id)arg1 identifierKey:(const char *)arg2 classKey:(const char *)arg3 transientKey:(const char *)arg4 clientConnection:(id)arg5 error:(unsigned long long *)arg6;	// IMP=0x00000001000812d0
- (id)userIdentityForContainerIdentifier:(id)arg1 clientConnection:(id)arg2 containerClass:(unsigned long long)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000100080d98
- (id)userIdentityFromXPCObject:(id)arg1 key:(const char *)arg2 containerClass:(unsigned long long)arg3 clientConnection:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x0000000100080c98
- (id)userIdentityFromClientPersonaUniqueString:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000001000808ec
- (id)nsObjectFromXPCObject:(id)arg1 key:(const char *)arg2;	// IMP=0x0000000100080898
- (id)nsUUIDValueFromXPCObject:(id)arg1 key:(const char *)arg2;	// IMP=0x0000000100080850
- (id)identifierFromXPCObject:(id)arg1 elseClientIdentifier:(id)arg2;	// IMP=0x00000001000807b8
- (id)nsStringValueFromXPCObject:(id)arg1 key:(const char *)arg2;	// IMP=0x0000000100080778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
