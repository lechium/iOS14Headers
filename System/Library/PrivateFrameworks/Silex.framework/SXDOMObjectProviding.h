/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SXComponents;


@protocol SXDOMObjectProviding <NSObject>
@property (readonly,nonatomic) id<SXDocumentStyle> documentStyle; 
@property (readonly,nonatomic) SXComponents * components; 
@property (readonly,nonatomic) id<SXAutoPlacement> autoPlacement; 
@required
-(SXComponents *)components;
-(id)imageResourceForIdentifier:(id)arg1;
-(id)imageResourceForIdentifier:(id)arg1;
-(id<SXDocumentStyle>)documentStyle;
-(id)componentLayoutForIdentifier:(id)arg1;
-(id)componentLayoutForIdentifier:(id)arg1;
-(id)resourceForIdentifier:(id)arg1;
-(id)resourceForIdentifier:(id)arg1;
-(id)componentStyleForComponent:(id)arg1;
-(id)componentStyleForComponent:(id)arg1;
-(id<SXAutoPlacement>)autoPlacement;

@end
