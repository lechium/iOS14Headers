//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol SRRequestFetching, SRRequestReading;

@protocol SRSensorKitServiceServerReading
- (void)fetchReaderMetadata:(id <SRRequestReading>)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)fetchAllDevices:(id <SRRequestReading>)arg1 idOnly:(_Bool)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)stopRecording:(id <SRRequestReading>)arg1 reply:(void (^)(NSError *))arg2;
- (void)startRecording:(id <SRRequestReading>)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestFileHandleForReading:(id <SRRequestFetching>)arg1 afterSegment:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)requestFileHandleForReading:(id <SRRequestFetching>)arg1 reply:(void (^)(NSDictionary *))arg2;
@end
