/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NUSingleSourceDefinition;

@interface NUScaledSourceDefinition : NUSingleSourceDefinition {

	NUSingleSourceDefinition* _source;
	SCD_Struct_NU7 _sourceSize;
	SCD_Struct_NU7 _fullSize;

}

@property (readonly) NUSingleSourceDefinition * source;              //@synthesize source=_source - In the implementation block
@property (readonly) SCD_Struct_NU7 sourceSize;                      //@synthesize sourceSize=_sourceSize - In the implementation block
@property (readonly) SCD_Struct_NU7 fullSize;                        //@synthesize fullSize=_fullSize - In the implementation block
-(long long)mediaType;
-(SCD_Struct_NU7)scale;
-(SCD_Struct_NU7)fullSize;
-(NUSingleSourceDefinition *)source;
-(SCD_Struct_NU7)sourceSize;
-(id)description;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSourceDefinition:(id)arg1 sourceSize:(SCD_Struct_NU7)arg2 fullSize:(SCD_Struct_NU7)arg3 ;
@end
