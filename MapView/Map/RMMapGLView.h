//
//  RMMapGLView.h
//  MapView
//
//  Created by Justin R. Miller on 11/21/13.
//
//

#import <GLKit/GLKit.h>

#import "RMTileSource.h"

@class RMMapView;

@interface RMMapGLView : GLKView

@property (nonatomic, readonly) id <RMTileSource>tileSource; // single source for now

@property CGFloat scale;
@property CGPoint offset;

- (id)initWithFrame:(CGRect)frame mapView:(RMMapView *)aMapView forTileSource:(id <RMTileSource>)aTileSource;

@end
