/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSKStyleMapper.h>

@protocol TSKStyleMapper;
@class NSString;

@interface TSCHStyleMapper : NSObject <TSKStyleMapper> {

	id<TSKStyleMapper> mUnderlyingMapper;
	BOOL mForceMatchStyle;

}

@property (readonly) id<TSKStyleMapper> underlyingMapper; 
@property (nonatomic,readonly) BOOL clientsMustRemap; 
@property (assign,nonatomic) BOOL forceMatchStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)replaceReferencedStylesInMap:(id)arg1 withMapper:(id)arg2 ;
+(id)mappedStyleWithMapper:(id)arg1 forStyle:(id)arg2 bakeComputable:(BOOL)arg3 ;
+(id)mappedStylesWithMapper:(id)arg1 forStyles:(id)arg2 bakeComputable:(BOOL)arg3 ;
+(id)mapperWithMapper:(id)arg1 ;
-(void)dealloc;
-(id)initWithMapper:(id)arg1 ;
-(id)mappedStyleForStyle:(id)arg1 ;
-(id)targetStylesheet;
-(void)pushMappingContext:(id)arg1 ;
-(void)popMappingContext:(id)arg1 ;
-(BOOL)forceMatchStyle;
-(void)setForceMatchStyle:(BOOL)arg1 ;
-(id)mappedStyleForStyle:(id)arg1 bakeComputable:(BOOL)arg2 ;
-(id<TSKStyleMapper>)underlyingMapper;
-(void)replaceReferencedStylesInMap:(id)arg1 ;
-(BOOL)clientsMustRemap;
@end

