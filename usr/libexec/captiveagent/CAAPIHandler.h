//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURL, NSURLSessionDataTask;

@interface CAAPIHandler : NSObject
{
    unsigned int _timeoutSeconds;	// 8 = 0x8
    NSURL *_apiURL;	// 16 = 0x10
    NSString *_userAgent;	// 24 = 0x18
    NSString *_interfaceName;	// 32 = 0x20
    NSOperationQueue *_opQueue;	// 40 = 0x28
    NSURLSessionDataTask *_dataTask;	// 48 = 0x30
    CDUnknownBlockType _responseHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000098dc
@property(copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain) NSOperationQueue *opQueue; // @synthesize opQueue=_opQueue;
@property unsigned int timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(retain) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain) NSURL *apiURL; // @synthesize apiURL=_apiURL;
- (void)fetchAPI;	// IMP=0x0000000100008fbc
- (void)sendResponseCode:(unsigned int)arg1 dictionary:(id)arg2;	// IMP=0x0000000100008f14
- (void)cancel;	// IMP=0x0000000100008ed4
- (id)initWithURLString:(id)arg1 queue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008cd4

@end

