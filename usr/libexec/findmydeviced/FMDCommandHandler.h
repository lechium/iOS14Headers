//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDCommandContext, FMDServiceProvider, NSDictionary, NSString;

@interface FMDCommandHandler : NSObject
{
    _Bool _requiresAsynchronousAck;	// 8 = 0x8
    NSDictionary *_commandParams;	// 16 = 0x10
    FMDCommandContext *_commandContext;	// 24 = 0x18
    FMDServiceProvider *_provider;	// 32 = 0x20
    NSDictionary *_ackDataForCommand;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003a464
@property(retain, nonatomic) NSDictionary *ackDataForCommand; // @synthesize ackDataForCommand=_ackDataForCommand;
@property(nonatomic) _Bool requiresAsynchronousAck; // @synthesize requiresAsynchronousAck=_requiresAsynchronousAck;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) FMDCommandContext *commandContext; // @synthesize commandContext=_commandContext;
@property(retain, nonatomic) NSDictionary *commandParams; // @synthesize commandParams=_commandParams;
- (id)fm_logID;	// IMP=0x000000010003a37c
- (void)sendAckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003a364
- (void)handleCommand;	// IMP=0x000000010003a360
- (void)didHandleCommandWithAckData:(id)arg1;	// IMP=0x000000010003a100
@property(readonly, nonatomic) _Bool isPreviouslyHandledCommand;
@property(readonly, nonatomic) NSString *commandID;
@property(readonly, nonatomic) NSString *commandName;
- (void)dealloc;	// IMP=0x0000000100039d18
- (void)executeCommand;	// IMP=0x00000001000398f4
- (id)initWithParams:(id)arg1 provider:(id)arg2;	// IMP=0x0000000100039838

@end
