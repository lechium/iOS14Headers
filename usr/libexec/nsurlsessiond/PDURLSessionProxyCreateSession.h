//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSURLSessionConfiguration, PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyCreateSession : PBCodable <NSCopying>
{
    NSData *_configuration;	// 8 = 0x8
    PDURLSessionProxySessionMessage *_session;	// 16 = 0x10
    _Bool _delegateImplementsDidReceiveResponse;	// 24 = 0x18
    _Bool _delegateImplementsSessionAuthChallenge;	// 25 = 0x19
    _Bool _delegateImplementsTaskAuthChallenge;	// 26 = 0x1a
    _Bool _delegateImplementsWillPerformRedirection;	// 27 = 0x1b
    _Bool _delegateImplementsWillSendRequest;	// 28 = 0x1c
    _Bool _supportsRedirects;	// 29 = 0x1d
    struct {
        unsigned int delegateImplementsDidReceiveResponse:1;
        unsigned int delegateImplementsSessionAuthChallenge:1;
        unsigned int delegateImplementsTaskAuthChallenge:1;
        unsigned int delegateImplementsWillPerformRedirection:1;
        unsigned int delegateImplementsWillSendRequest:1;
        unsigned int supportsRedirects:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000050e4
@property(nonatomic) _Bool delegateImplementsDidReceiveResponse; // @synthesize delegateImplementsDidReceiveResponse=_delegateImplementsDidReceiveResponse;
@property(nonatomic) _Bool delegateImplementsWillPerformRedirection; // @synthesize delegateImplementsWillPerformRedirection=_delegateImplementsWillPerformRedirection;
@property(nonatomic) _Bool delegateImplementsTaskAuthChallenge; // @synthesize delegateImplementsTaskAuthChallenge=_delegateImplementsTaskAuthChallenge;
@property(nonatomic) _Bool delegateImplementsSessionAuthChallenge; // @synthesize delegateImplementsSessionAuthChallenge=_delegateImplementsSessionAuthChallenge;
@property(nonatomic) _Bool delegateImplementsWillSendRequest; // @synthesize delegateImplementsWillSendRequest=_delegateImplementsWillSendRequest;
@property(nonatomic) _Bool supportsRedirects; // @synthesize supportsRedirects=_supportsRedirects;
@property(retain, nonatomic) NSData *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100004ec0
- (unsigned long long)hash;	// IMP=0x0000000100004d90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100004b90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000049e8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100004884
- (void)writeTo:(id)arg1;	// IMP=0x0000000100004738
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100004078
- (id)dictionaryRepresentation;	// IMP=0x0000000100003dc0
- (id)description;	// IMP=0x0000000100003d0c
@property(nonatomic) _Bool hasDelegateImplementsDidReceiveResponse;
@property(nonatomic) _Bool hasDelegateImplementsWillPerformRedirection;
@property(nonatomic) _Bool hasDelegateImplementsTaskAuthChallenge;
@property(nonatomic) _Bool hasDelegateImplementsSessionAuthChallenge;
@property(nonatomic) _Bool hasDelegateImplementsWillSendRequest;
@property(nonatomic) _Bool hasSupportsRedirects;
@property(readonly, nonatomic) _Bool hasConfiguration;
@property(readonly, nonatomic) _Bool hasSession;
@property(retain, setter=_setActualConfiguration:) NSURLSessionConfiguration *_actualConfiguration;

@end
