//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFTLV;

@interface NFTrustSignOutputTable : NSObject
{
    NFTLV *_localValidation;	// 8 = 0x8
    NFTLV *_counter;	// 16 = 0x10
    NFTLV *_signature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005ea98
@property(retain, nonatomic) NFTLV *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NFTLV *counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NFTLV *localValidation; // @synthesize localValidation=_localValidation;
- (id)signOutputTableWithInputTable:(id)arg1 data:(id)arg2 localValidation:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x000000010005e210

@end
