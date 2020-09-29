/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSDataDetector, NSString;

@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol> {

	NSDataDetector* _dataDetector;
	NSString* _emailMapping;
	NSString* _linkMapping;

}

@property (retain) NSDataDetector * dataDetector;                   //@synthesize dataDetector=_dataDetector - In the implementation block
@property (retain) NSString * emailMapping;                         //@synthesize emailMapping=_emailMapping - In the implementation block
@property (retain) NSString * linkMapping;                          //@synthesize linkMapping=_linkMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withEmailMapping:(id)arg1 linkMapping:(id)arg2 ;
-(NSDataDetector *)dataDetector;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDataDetector:(NSDataDetector *)arg1 ;
-(unsigned long long)hash;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithEmailMapping:(id)arg1 linkMapping:(id)arg2 ;
-(BOOL)isEqualToEntityMappingTransformer:(id)arg1 ;
-(NSString *)emailMapping;
-(void)setEmailMapping:(NSString *)arg1 ;
-(NSString *)linkMapping;
-(void)setLinkMapping:(NSString *)arg1 ;
@end
