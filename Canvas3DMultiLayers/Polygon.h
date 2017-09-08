#pragma once

#include "Shape.h"

namespace canvas {
	class Point;

	class Polygon : public Shape {
	private:
		std::vector<glm::dvec2> points;
		glm::dvec2 current_point;

	public:
		Polygon(int subtype);
		Polygon(int subtype, const glm::dvec2& point);
		Polygon(int subtype, QDomNode& node);
		~Polygon();

		boost::shared_ptr<Shape> clone() const;
		void draw(QPainter& painter, const QPointF& origin, double scale) const;
		QDomElement toXml(QDomDocument& doc) const;
		void addPoint(const glm::dvec2& point);
		std::vector<glm::dvec2> getPoints() const;
		void updateByNewPoint(const glm::dvec2& point, bool shiftPressed);
		bool hit(const glm::dvec2& point) const;
		void resize(const glm::dvec2& scale, const glm::dvec2& resize_center);
		BoundingBox boundingBox() const;
		bool withinPolygon(const std::vector<glm::dvec2>& points, const glm::dvec2& pt) const;
	};

}