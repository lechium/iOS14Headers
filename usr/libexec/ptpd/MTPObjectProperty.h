//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface MTPObjectProperty : NSObject
{
    unsigned short _propertyCode;	// 8 = 0x8
    unsigned short _dataType;	// 10 = 0xa
    unsigned char _writableSet;	// 12 = 0xc
    char *_dataValue;	// 16 = 0x10
    unsigned int _groupCode;	// 24 = 0x18
    unsigned char _formFlag;	// 28 = 0x1c
    _Bool _useString;	// 29 = 0x1d
    NSString *_stringValue;	// 32 = 0x20
    NSMutableData *_dataObject;	// 40 = 0x28
}

+ (id)objectPropertyWithPropertyCode:(unsigned int)arg1 andDataType:(unsigned short)arg2;	// IMP=0x000000010001c05c
- (void)dealloc;	// IMP=0x000000010001c564
- (void)setFormFlag:(unsigned char)arg1;	// IMP=0x000000010001c55c
- (unsigned char)formFlag;	// IMP=0x000000010001c554
- (unsigned short)dataType;	// IMP=0x000000010001c54c
- (unsigned short)propertyCode;	// IMP=0x000000010001c544
- (void)objectPropertyListElement:(id)arg1 withObject:(id)arg2 andHandle:(unsigned int)arg3;	// IMP=0x000000010001c490
- (void)objectPropertyDescriptionDataset:(id)arg1;	// IMP=0x000000010001c31c
- (void)objectValue:(id)arg1 withObject:(id)arg2 andHandle:(unsigned int)arg3;	// IMP=0x000000010001c09c
- (id)initWithPropertyCode:(unsigned short)arg1 andDataType:(unsigned short)arg2;	// IMP=0x000000010001c000

@end

